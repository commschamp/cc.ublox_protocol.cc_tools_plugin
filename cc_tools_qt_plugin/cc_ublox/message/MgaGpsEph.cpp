// Generated by commsdsl2tools_qt v6.3.2

#include "MgaGpsEph.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaGpsEph.h"

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
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
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
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_svid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_fitInterval(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FitInterval;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_uraIndex(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UraIndex;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_svHealth(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SvHealth;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_tgd(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Tgd;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_iodc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Iodc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_toc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Toc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_af2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Af2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_af1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Af1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_af0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Af0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_crs(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Crs;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_deltaN(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DeltaN;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_m0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::M0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cuc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cuc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cus(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cus;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_e(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::E;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_sqrtA(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SqrtA;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_toe(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Toe;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cic(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cic;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_omega0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Omega0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cis(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cis;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_crc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Crc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_i0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::I0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_omega(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Omega;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_omegaDot(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OmegaDot;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_idot(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Idot;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGpsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    props.append(createProps_version(false));
    props.append(createProps_svid(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_fitInterval(false));
    props.append(createProps_uraIndex(false));
    props.append(createProps_svHealth(false));
    props.append(createProps_tgd(false));
    props.append(createProps_iodc(false));
    props.append(createProps_toc(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_af2(false));
    props.append(createProps_af1(false));
    props.append(createProps_af0(false));
    props.append(createProps_crs(false));
    props.append(createProps_deltaN(false));
    props.append(createProps_m0(false));
    props.append(createProps_cuc(false));
    props.append(createProps_cus(false));
    props.append(createProps_e(false));
    props.append(createProps_sqrtA(false));
    props.append(createProps_toe(false));
    props.append(createProps_cic(false));
    props.append(createProps_omega0(false));
    props.append(createProps_cis(false));
    props.append(createProps_crc(false));
    props.append(createProps_i0(false));
    props.append(createProps_omega(false));
    props.append(createProps_omegaDot(false));
    props.append(createProps_idot(false));
    props.append(createProps_reserved3(false));
    return props;
}

} // namespace

class MgaGpsEphImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaGpsEph<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaGpsEphImpl
    >
{
public:
    MgaGpsEphImpl() = default;
    MgaGpsEphImpl(const MgaGpsEphImpl&) = delete;
    MgaGpsEphImpl(MgaGpsEphImpl&&) = delete;
    virtual ~MgaGpsEphImpl() = default;
    MgaGpsEphImpl& operator=(const MgaGpsEphImpl&) = default;
    MgaGpsEphImpl& operator=(MgaGpsEphImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGpsEph::MgaGpsEph() : m_pImpl(new MgaGpsEphImpl) {}
MgaGpsEph::~MgaGpsEph() = default;

MgaGpsEph& MgaGpsEph::operator=(const MgaGpsEph& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGpsEph& MgaGpsEph::operator=(MgaGpsEph&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaGpsEph::MsgIdParamType MgaGpsEph::doGetId()
{
    return ::cc_ublox::message::MgaGpsEph<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaGpsEph::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGpsEph::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGpsEph::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGpsEph::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGpsEph::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGpsEph*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGpsEph::MsgIdParamType MgaGpsEph::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGpsEph::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGpsEph::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGpsEph::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGpsEph::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGpsEph::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
