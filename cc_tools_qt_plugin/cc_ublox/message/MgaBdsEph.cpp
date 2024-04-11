// Generated by commsdsl2tools_qt v6.3.2

#include "MgaBdsEph.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaBdsEph.h"

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
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
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
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_svid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_satH1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SatH1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_iODC(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IODC;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_a2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::A2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_a1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::A1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_a0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::A0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_toc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Toc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_tGD1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TGD1;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_uRAI(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::URAI;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_iODE(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IODE;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_toe(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Toe;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_sqrtA(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SqrtA;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_e(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::E;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_omega(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Omega;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_deltan(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Deltan;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_iDOT(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::IDOT;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_m0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::M0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_omega0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Omega0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_omegaDot(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OmegaDot;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_i0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::I0;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cuc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cuc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cus(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cus;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_crc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Crc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_crs(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Crs;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cic(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cic;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_cis(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cis;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaBdsEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
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
    props.append(createProps_satH1(false));
    props.append(createProps_iODC(false));
    props.append(createProps_a2(false));
    props.append(createProps_a1(false));
    props.append(createProps_a0(false));
    props.append(createProps_toc(false));
    props.append(createProps_tGD1(false));
    props.append(createProps_uRAI(false));
    props.append(createProps_iODE(false));
    props.append(createProps_toe(false));
    props.append(createProps_sqrtA(false));
    props.append(createProps_e(false));
    props.append(createProps_omega(false));
    props.append(createProps_deltan(false));
    props.append(createProps_iDOT(false));
    props.append(createProps_m0(false));
    props.append(createProps_omega0(false));
    props.append(createProps_omegaDot(false));
    props.append(createProps_i0(false));
    props.append(createProps_cuc(false));
    props.append(createProps_cus(false));
    props.append(createProps_crc(false));
    props.append(createProps_crs(false));
    props.append(createProps_cic(false));
    props.append(createProps_cis(false));
    props.append(createProps_reserved2(false));
    return props;
}

} // namespace

class MgaBdsEphImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaBdsEph<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaBdsEphImpl
    >
{
public:
    MgaBdsEphImpl() = default;
    MgaBdsEphImpl(const MgaBdsEphImpl&) = delete;
    MgaBdsEphImpl(MgaBdsEphImpl&&) = delete;
    virtual ~MgaBdsEphImpl() = default;
    MgaBdsEphImpl& operator=(const MgaBdsEphImpl&) = default;
    MgaBdsEphImpl& operator=(MgaBdsEphImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaBdsEph::MgaBdsEph() : m_pImpl(new MgaBdsEphImpl) {}
MgaBdsEph::~MgaBdsEph() = default;

MgaBdsEph& MgaBdsEph::operator=(const MgaBdsEph& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaBdsEph& MgaBdsEph::operator=(MgaBdsEph&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaBdsEph::MsgIdParamType MgaBdsEph::doGetId()
{
    return ::cc_ublox::message::MgaBdsEph<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaBdsEph::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaBdsEph::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaBdsEph::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaBdsEph::resetImpl()
{
    m_pImpl->reset();
}

bool MgaBdsEph::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaBdsEph*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaBdsEph::MsgIdParamType MgaBdsEph::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaBdsEph::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaBdsEph::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaBdsEph::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaBdsEph::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaBdsEph::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
