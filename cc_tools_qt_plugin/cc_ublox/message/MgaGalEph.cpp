// Generated by commsdsl2tools_qt v6.3.0

#include "MgaGalEph.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaGalEph.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_svid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_iodNav(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IodNav;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_deltaN(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DeltaN;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_m0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::M0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_e(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::E;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_sqrtA(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SqrtA;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_omega0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Omega0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_i0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::I0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_omega(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Omega;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_omegaDot(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OmegaDot;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_iDot(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IDot;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cuc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cuc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cus(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cus;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_crc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Crc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_crs(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Crs;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cic(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cic;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cis(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cis;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_toe(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Toe;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_af0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Af0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_af1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Af1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_af2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Af2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_sisaIndexE1E5b(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SisaIndexE1E5b;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_toc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Toc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_bgdE1E5b(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::BgdE1E5b;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_healthE1B(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HealthE1B;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_dataValidityE1B(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DataValidityE1B;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_healthE5b(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HealthE5b;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_dataValidityE5b(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DataValidityE5b;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGalEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    props.append(createProps_version(false));
    props.append(createProps_svid(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_iodNav(false));
    props.append(createProps_deltaN(false));
    props.append(createProps_m0(false));
    props.append(createProps_e(false));
    props.append(createProps_sqrtA(false));
    props.append(createProps_omega0(false));
    props.append(createProps_i0(false));
    props.append(createProps_omega(false));
    props.append(createProps_omegaDot(false));
    props.append(createProps_iDot(false));
    props.append(createProps_cuc(false));
    props.append(createProps_cus(false));
    props.append(createProps_crc(false));
    props.append(createProps_crs(false));
    props.append(createProps_cic(false));
    props.append(createProps_cis(false));
    props.append(createProps_toe(false));
    props.append(createProps_af0(false));
    props.append(createProps_af1(false));
    props.append(createProps_af2(false));
    props.append(createProps_sisaIndexE1E5b(false));
    props.append(createProps_toc(false));
    props.append(createProps_bgdE1E5b(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_healthE1B(false));
    props.append(createProps_dataValidityE1B(false));
    props.append(createProps_healthE5b(false));
    props.append(createProps_dataValidityE5b(false));
    props.append(createProps_reserved3(false));
    return props;
}

} // namespace

class MgaGalEphImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaGalEph<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaGalEphImpl
    >
{
public:
    MgaGalEphImpl() = default;
    MgaGalEphImpl(const MgaGalEphImpl&) = delete;
    MgaGalEphImpl(MgaGalEphImpl&&) = delete;
    virtual ~MgaGalEphImpl() = default;
    MgaGalEphImpl& operator=(const MgaGalEphImpl&) = default;
    MgaGalEphImpl& operator=(MgaGalEphImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGalEph::MgaGalEph() : m_pImpl(new MgaGalEphImpl) {}
MgaGalEph::~MgaGalEph() = default;

MgaGalEph& MgaGalEph::operator=(const MgaGalEph& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGalEph& MgaGalEph::operator=(MgaGalEph&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaGalEph::MsgIdParamType MgaGalEph::doGetId()
{
    return ::cc_ublox::message::MgaGalEph<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaGalEph::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGalEph::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGalEph::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGalEph::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGalEph::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGalEph*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGalEph::MsgIdParamType MgaGalEph::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGalEph::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGalEph::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGalEph::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGalEph::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGalEph::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
