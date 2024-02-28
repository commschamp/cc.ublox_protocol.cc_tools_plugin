// Generated by commsdsl2tools_qt v6.3.0

#include "MgaGloEph.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaGloEph.h"

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
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
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
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_svid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_fT(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FT;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_b(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::B;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_m(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::M;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_h(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::H;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_x(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::X;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_y(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Y;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_z(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Z;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_dx(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Dx;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_dy(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Dy;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_dz(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Dz;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ddx(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ddx;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ddy(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ddy;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_ddz(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ddz;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_tb(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Tb;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_gamma(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Gamma;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_e(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::E;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_deltaTau(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DeltaTau;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_tau(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Tau;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaGloEphFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
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
    props.append(createProps_fT(false));
    props.append(createProps_b(false));
    props.append(createProps_m(false));
    props.append(createProps_h(false));
    props.append(createProps_x(false));
    props.append(createProps_y(false));
    props.append(createProps_z(false));
    props.append(createProps_dx(false));
    props.append(createProps_dy(false));
    props.append(createProps_dz(false));
    props.append(createProps_ddx(false));
    props.append(createProps_ddy(false));
    props.append(createProps_ddz(false));
    props.append(createProps_tb(false));
    props.append(createProps_gamma(false));
    props.append(createProps_e(false));
    props.append(createProps_deltaTau(false));
    props.append(createProps_tau(false));
    props.append(createProps_reserved2(false));
    return props;
}

} // namespace

class MgaGloEphImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaGloEph<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaGloEphImpl
    >
{
public:
    MgaGloEphImpl() = default;
    MgaGloEphImpl(const MgaGloEphImpl&) = delete;
    MgaGloEphImpl(MgaGloEphImpl&&) = delete;
    virtual ~MgaGloEphImpl() = default;
    MgaGloEphImpl& operator=(const MgaGloEphImpl&) = default;
    MgaGloEphImpl& operator=(MgaGloEphImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGloEph::MgaGloEph() : m_pImpl(new MgaGloEphImpl) {}
MgaGloEph::~MgaGloEph() = default;

MgaGloEph& MgaGloEph::operator=(const MgaGloEph& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGloEph& MgaGloEph::operator=(MgaGloEph&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaGloEph::MsgIdParamType MgaGloEph::doGetId()
{
    return ::cc_ublox::message::MgaGloEph<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaGloEph::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGloEph::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGloEph::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGloEph::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGloEph::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGloEph*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGloEph::MsgIdParamType MgaGloEph::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGloEph::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGloEph::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGloEph::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGloEph::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGloEph::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
